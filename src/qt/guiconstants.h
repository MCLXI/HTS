// Copyright (c) 2011-2015 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef HTS_QT_GUICONSTANTS_H
#define HTS_QT_GUICONSTANTS_H

/* Milliseconds between model updates */
static const int MODEL_UPDATE_DELAY = 250;

/* AskPassphraseDialog -- Maximum passphrase length */
static const int MAX_PASSPHRASE_SIZE = 1024;

/* HTSGUI -- Size of icons in status bar */
static const int STATUSBAR_ICONSIZE = 16;

static const bool DEFAULT_SPLASHSCREEN = true;

/* Invalid field background style */
#define STYLE_INVALID "background:#FF8080"

/* Transaction list -- unconfirmed transaction */
#define COLOR_UNCONFIRMED QColor(153, 13, 13)
/* Transaction list -- negative amount */
#define COLOR_NEGATIVE QColor(173, 43, 43)
/* Transaction list -- positive amount */
#define COLOR_POSITIVE QColor(11, 173, 3)
/* Transaction list -- bare address (without label) */
//#define COLOR_BAREADDRESS QColor(198, 9, 9)
#define COLOR_BAREADDRESS QColor(0, 0, 0)
/* Transaction list -- anon transaction */
#define COLOR_ANON QColor(245, 166, 35)
/* Transaction list -- TX status decoration - open until date */
#define COLOR_TX_STATUS_OPENUNTILDATE QColor(0, 0, 0)
/* Transaction list -- TX status decoration - offline */
#define COLOR_TX_STATUS_OFFLINE QColor(0, 0, 0)
/* Transaction list -- TX status decoration - danger, tx needs attention */
#define COLOR_TX_STATUS_DANGER QColor(200, 100, 100)
/* Transaction list -- TX status decoration - default color */
#define COLOR_BLACK QColor(0, 0, 0)
/* Transaction list -- Address - default color */
#define COLOR_TXLIST QColor(0, 0, 0)

/* Tooltips longer than this (in characters) are converted into rich text,
   so that they can be word-wrapped.
 */
static const int TOOLTIP_WRAP_THRESHOLD = 80;

/* Maximum allowed URI length */
static const int MAX_URI_LENGTH = 255;

/* QRCodeDialog -- size of exported QR Code image */
#define QR_IMAGE_SIZE 260

/* Number of frames in spinner animation */
#define SPINNER_FRAMES 36

#define QAPP_ORG_NAME "HTS"
#define QAPP_ORG_DOMAIN "HTS.org"
#define QAPP_APP_NAME_DEFAULT "HTS-Qt"
#define QAPP_APP_NAME_TESTNET "HTS-Qt-testnet"

#endif // HTS_QT_GUICONSTANTS_H
