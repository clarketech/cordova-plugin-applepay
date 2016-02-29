#import <UIKit/UIKit.h>
#import <Cordova/CDVPlugin.h>
#import <Cordova/CDV.h>
#import <PassKit/PassKit.h>


@interface CDVApplePay : CDVPlugin
<
PKPaymentAuthorizationViewControllerDelegate
>
{
    NSString *merchantId;
    NSString *callbackId;
    Boolean didAuthorize;
}

- (void)setMerchantId:(CDVInvokedUrlCommand*)command;
- (void)getAllowsApplePay:(CDVInvokedUrlCommand*)command;
- (void)getStripeToken:(CDVInvokedUrlCommand*)command;

@end
