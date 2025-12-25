# Repo-local GDB config for C++ (constructors/destructors, new/delete, STL).
# Usage (recommended):
#   cd ex01
#   gdb -q -x ../.gdbinit ./phonebook
# If you want auto-load, add this to ~/.gdbinit:
#   add-auto-load-safe-path /home/jait-chd/Desktop/CPP
#   source /home/jait-chd/Desktop/CPP/.gdbinit

set confirm off
set pagination off
set print pretty on
set print object on
set print elements 0
set print repeats 0
set print asm-demangle on
set print demangle on
set demangle-style gnu-v3
set breakpoint pending on
set disassemble-next-line on
set history save on
set history filename ~/.gdb_history

# Show more context when stepping.
set listsize 20

# Try to enable libstdc++ pretty-printers (works when the Python printers are installed).
python
import sys
try:
    from libstdcxx.v6.printers import register_libstdcxx_printers
    register_libstdcxx_printers(None)
    print("[gdb] libstdc++ pretty-printers enabled")
except Exception as e:
    print("[gdb] libstdc++ pretty-printers not available: %s" % (e,))
end

# ---- Convenience commands ----

# Break on constructors of a class in your program.
# Example: (gdb) bctor PhoneBook
#          (gdb) bctor Contact
define bctor
  if $argc != 1
    echo Usage: bctor <ClassName>\n
  else
    rbreak ^$arg0::$arg0\(.*\)$
  end
end

# Break on destructors of a class in your program.
# Example: (gdb) bdtor PhoneBook
define bdtor
  if $argc != 1
    echo Usage: bdtor <ClassName>\n
  else
    rbreak ^$arg0::~$arg0\(.*\)$
  end
end

# Break on global operator new/delete (helps see allocations).
define bnew
  rbreak ^operator new\(
  rbreak ^operator new\[\]\(
end

define bdelete
  rbreak ^operator delete\(
  rbreak ^operator delete\[\]\(
end

# Break on std::basic_string<char> ctor/dtor (may depend on libstdc++ symbols being available).
# Warning: can create many breakpoints.
define bstring
  rbreak std::basic_string<char.*>::basic_string\(
  rbreak std::basic_string<char.*>::~basic_string\(
end

# Print a short backtrace and current line on each stop.
# Toggle with: (gdb) set $_gdb_hook_stop = 0/1
set $_gdb_hook_stop = 1

define hook-stop
  if $_gdb_hook_stop
    echo \n---- stop ----\n
    frame
    bt 5
    list
  end
end
