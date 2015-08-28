# cordova-plugin-applepay

This plugin is a basic implementation of Stripe and Apple Pay. 


## Installation

1. Follow the steps on https://stripe.com/docs/mobile/apple-pay to get your certs generated
2. In your Xcode project, go to **Capabilities** and enable **Apple Pay**
3. Install the plugin
```sh
cordova plugin add https://github.com/arzynik/cordova-plugin-applepay  --variable STRIPE_PUBLISHABLE_KEY="pk_test_stripekey" --variable APPLE_PAY_MERCHANT="merchant.apple.test"
```

## Supported Platforms

- iOS

## Methods

- ApplePay.getAllowsApplePay
- ApplePay.setMerchantId
- ApplePay.getStripeToken

#### ApplePay.getAllowsApplePay

Returns successfully if the device is setup for Apple Pay (correct software version, correct hardware & has card added).

```js
ApplePay.getAllowsApplePay(successCallback, errorCallback);
```

#### ApplePay.setMerchantId

Set your Apple-given merchant ID.

```js
ApplePay.setMerchantId(successCallback, errorCallback, "merchant.apple.test");
```

#### ApplePay.getStripeToken

Request a stripe token for an Apple Pay card.

```js
ApplePay.getStripeToken(successCallback, errorCallback, amount, description, currency);
```

## Example

```js
function onError(err) {
	alert(JSON.stringify(err));
}
function onSuccess(response) {
	alert(response);
}

ApplePay.setMerchantId("merchant.apple.test");
ApplePay.getStripeToken(onSuccess, onError, 10.00, "Delicious Cake", "USD");
```
