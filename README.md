paste.exe
=========
Writes text from the Windows clipboard to standard output. Freestanding,
should work on Windows 3.11 (with Win32s) through Windows 11.

Example usage:

 1. Copy some unformatted JSON from Azure DevOps error output.
 2. `paste.exe | jq .`

Building:

    # requires mingw-w64
    make -f Makefile.cross

Installing:

 1. Download a release or build with mingw.
 2. Add the location of paste.exe to your `%PATH%`.

By Sijmen J. Mulder (<ik@sjmulder.nl>). Licensed under 2-clause BSD.
