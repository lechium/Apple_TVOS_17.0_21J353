//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (WebKitInternal)
+ (void)_webkit_addErrorsWithCodesAndDescriptions:(id)arg1 inDomain:(id)arg2;	// IMP=0x0050000000104d10
+ (id)_webKitErrorWithCode:(int)arg1 failingURL:(id)arg2;	// IMP=0x0050000000104ac0
+ (id)_webKitErrorWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3;	// IMP=0x0050000000104a60
+ (id)_webkit_errorWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3;	// IMP=0x0050000000104a10
+ (void)_registerWebKitErrors;	// IMP=0x0050000000104830
- (id)_webkit_initWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3;	// IMP=0x0010000000104750
- (id)_initWithPluginErrorCode:(int)arg1 contentURL:(id)arg2 pluginPageURL:(id)arg3 pluginName:(id)arg4 MIMEType:(id)arg5;	// IMP=0x0010000000104b20
@end

