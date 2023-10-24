//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AKAppleIDAuthSupportProxyImpl : NSObject
{
}

- (id)appleIDAuthSupportCopyAppTokensWithMasterToken:(struct __AppleIDAuthSupportTokenData *)arg1 authURL:(id)arg2 serviceIds:(id)arg3 authParams:(id)arg4 error:(id *)arg5;	// IMP=0x002000000009f6eb
- (struct __AppleIDAuthSupportTokenData *)appleIDAuthSupportTokenCreateWithExternalizedVersion:(id)arg1 error:(id *)arg2;	// IMP=0x001000000009f69c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

