Shared Libraries
================

## HTSconsensus

The purpose of this library is to make the verification functionality that is critical to HTS's consensus available to other applications, e.g. to language bindings.

### API

The interface is defined in the C header `HTSconsensus.h` located in  `src/script/HTSconsensus.h`.

#### Version

`HTSconsensus_version` returns an `unsigned int` with the API version *(currently at an experimental `0`)*.

#### Script Validation

`HTSconsensus_verify_script` returns an `int` with the status of the verification. It will be `1` if the input script correctly spends the previous output `scriptPubKey`.

##### Parameters
- `const unsigned char *scriptPubKey` - The previous output script that encumbers spending.
- `unsigned int scriptPubKeyLen` - The number of bytes for the `scriptPubKey`.
- `const unsigned char *txTo` - The transaction with the input that is spending the previous output.
- `unsigned int txToLen` - The number of bytes for the `txTo`.
- `unsigned int nIn` - The index of the input in `txTo` that spends the `scriptPubKey`.
- `unsigned int flags` - The script validation flags *(see below)*.
- `HTSconsensus_error* err` - Will have the error/success code for the operation *(see below)*.

##### Script Flags
- `HTSconsensus_SCRIPT_FLAGS_VERIFY_NONE`
- `HTSconsensus_SCRIPT_FLAGS_VERIFY_P2SH` - Evaluate P2SH ([BIP16](https://github.com/HTS/bips/blob/master/bip-0016.mediawiki)) subscripts
- `HTSconsensus_SCRIPT_FLAGS_VERIFY_DERSIG` - Enforce strict DER ([BIP66](https://github.com/HTS/bips/blob/master/bip-0066.mediawiki)) compliance

##### Errors
- `HTSconsensus_ERR_OK` - No errors with input parameters *(see the return value of `HTSconsensus_verify_script` for the verification status)*
- `HTSconsensus_ERR_TX_INDEX` - An invalid index for `txTo`
- `HTSconsensus_ERR_TX_SIZE_MISMATCH` - `txToLen` did not match with the size of `txTo`
- `HTSconsensus_ERR_DESERIALIZE` - An error deserializing `txTo`

### Example Implementations
- [NHTS](https://github.com/NicolasDorier/NHTS/blob/master/NHTS/Script.cs#L814) (.NET Bindings)
- [node-libHTSconsensus](https://github.com/bitpay/node-libHTSconsensus) (Node.js Bindings)
- [java-libHTSconsensus](https://github.com/dexX7/java-libHTSconsensus) (Java Bindings)
- [HTSconsensus-php](https://github.com/Bit-Wasp/HTSconsensus-php) (PHP Bindings)
