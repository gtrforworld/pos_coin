ULMEX Core
=============

Setup
---------------------
[ULMEX Core](http://ulmex.org/wallet) is the original ULMEX client and it builds the backbone of the network. However, it downloads and stores the entire history of ULMEX transactions; depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more. Thankfully you only have to do this once.

Running
---------------------
The following are some helpful notes on how to run ULMEX Core on your native platform.

### Unix

Unpack the files into a directory and run:

- `bin/ulmex-qt` (GUI) or
- `bin/ulmexd` (headless)

If this is the first time running ULMEX Core (since v5.0.0), you'll need to install the sapling params by running the included `install-params.sh` script, which copies the two params files to `$HOME/.ulmex-params`

### Windows

Unpack the files into a directory, and then run ulmex-qt.exe.

### macOS

Drag ULMEX-Qt to your applications folder, and then run ULMEX-Qt.

### Need Help?

* See the documentation at the [ULMEX Wiki](https://github.com/ULMEX-Project/ULMEX/wiki)
for help and more information.
* Ask for help on the [ULMEX Forum](http://forum.ulmex.org/).
* Join our Discord server [Discord Server](https://discord.ulmex.org)

Building
---------------------
The following are developer notes on how to build ULMEX Core on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [Dependencies](dependencies.md)
- [macOS Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Windows Build Notes](build-windows.md)
- [Gitian Building Guide](gitian-building.md)

Development
---------------------
The ULMEX repo's [root README](/README.md) contains relevant information on the development process and automated testing.

- [Developer Notes](developer-notes.md)
- [Multiwallet Qt Development](multiwallet-qt.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- [Source Code Documentation (External Link)](https://www.fuzzbawls.pw/ulmex/doxygen/)
- [Translation Process](translation_process.md)
- [Unit Tests](unit-tests.md)
- [Unauthenticated REST Interface](REST-interface.md)
- [Dnsseed Policy](dnsseed-policy.md)

### Resources
* Discuss on the [ULMEX](http://forum.ulmex.org/) forum.
* Join the [ULMEX Discord](https://discord.ulmex.org).

### Miscellaneous
- [Files](files.md)
- [Fuzz-testing](fuzzing.md)
- [Reduce Memory](reduce-memory.md)
- [Tor Support](tor.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)

License
---------------------
Distributed under the [MIT software license](/COPYING).
This product includes software developed by the OpenSSL Project for use in the [OpenSSL Toolkit](https://www.openssl.org/). This product includes
cryptographic software written by Eric Young ([eay@cryptsoft.com](mailto:eay@cryptsoft.com)), and UPnP software written by Thomas Bernard.
