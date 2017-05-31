#import <Cordova/CDVPlugin.h>

@interface InterfacePlugin : CDVPlugin
//login
- (void)login:(CDVInvokedUrlCommand *)command;
- (void)regist:(CDVInvokedUrlCommand *)command;
- (void)sendAuthCode:(CDVInvokedUrlCommand *)command;
- (void)checkAuthCode:(CDVInvokedUrlCommand *)command;
- (void)findPassword:(CDVInvokedUrlCommand *)command;
- (void)validatePassword:(CDVInvokedUrlCommand *)command;
- (void)updatePassword:(CDVInvokedUrlCommand *)command;
- (void)updatePhone:(CDVInvokedUrlCommand *)command;
- (void)carCreate:(CDVInvokedUrlCommand *)command;
- (void)addDevice:(CDVInvokedUrlCommand *)command;
- (void)unbind:(CDVInvokedUrlCommand *)command;
- (void)unbindCar:(CDVInvokedUrlCommand *)command;
- (void)setPin:(CDVInvokedUrlCommand *)command;
- (void)getControlStatus:(CDVInvokedUrlCommand *)command;
- (void)carControl:(CDVInvokedUrlCommand *)command;
- (void)getCarControlInfo:(CDVInvokedUrlCommand*)command;
- (void)getControlInfoByTaskId:(CDVInvokedUrlCommand*)command;
- (void)setBaseUrl:(CDVInvokedUrlCommand*)command;
- (void)logout:(CDVInvokedUrlCommand *)command;
- (void)updateFlag:(CDVInvokedUrlCommand *)command;
- (void)catchCrashInfo:(CDVInvokedUrlCommand *)command;
- (void)showPinInput:(CDVInvokedUrlCommand *)command;
- (void)showAuthCodeInput:(CDVInvokedUrlCommand *)command;
- (void)confirmFindPin:(CDVInvokedUrlCommand*)command;
@end
