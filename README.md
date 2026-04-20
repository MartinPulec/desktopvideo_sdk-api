# Versioned BlackMagic DeckLink API (DesktopVideo)

The intention of this repository is to keep versioned BMD API, mostly
for my internal needs (but can be used also by someone else).

Note that not all SDK are versioned, just those that I have downloaded
(that are somehow interesting for me). Open an issue in case of interest
for another version to add.

The license of the API solely seems to be BSL 1.0 (Boost Software License).

## Creation

created from <https://www.blackmagicdesign.com/support/family/capture-and-playback>

Copied `include` subdirectories of Linux, Mac, Win to this repo (stripping
the rest).

Pushing with a tag triggers CI action to create C-compatible API for Windows.
