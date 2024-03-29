paste.exe
=========
The missing companion to Windows' [clip.exe][1], writing text from the
Windows clipboard to standard output Freestanding, should work on
Windows 3.11 (with [Win32s][2]) through Windows 11.

[1]: https://learn.microsoft.com/en-us/windows-server/administration/windows-commands/clip
[2]: https://en.wikipedia.org/wiki/Win32s

Example usage
-------------
 1. Copy some unformatted JSON from Azure DevOps error output.
 2. `paste.exe | jq .`

Building
--------
Requires [MinGW-w64](https://www.mingw-w64.org/).

    make -f Makefile.cross

Installing
----------
 1. Download [a release][3] or build with MinGW and place *paste.exe*
    somewhere convenient.
 2. Add its location of [to your `%PATH%`][4].

[3]: https://github.com/sjmulder/paste/releases
[4]: https://www.howtogeek.com/787217/how-to-edit-environment-variables-on-windows-10-or-11/

Author
------
By Sijmen J. Mulder (<ik@sjmulder.nl>). Licensed under
[2-clause BSD](LICENSE.md).
