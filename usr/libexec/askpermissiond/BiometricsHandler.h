//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface BiometricsHandler : NSObject
{
}

+ (void)_storeToken:(id)arg1;	// IMP=0x002000000000a178
+ (void)_retreiveTokenWithAction:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000009e74
+ (void)_removeToken;	// IMP=0x0010000000009bf1
+ (void)_presentBiometricsDialogWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000099d1
+ (void)storeToken:(id)arg1;	// IMP=0x00100000000096f8
+ (id)retreiveTokenWithAction:(long long)arg1;	// IMP=0x00100000000093f6
+ (void)reset;	// IMP=0x00100000000093c6
+ (void)removeToken;	// IMP=0x00100000000093b4
+ (void)setState:(long long)arg1;	// IMP=0x001000000000935a
+ (_Bool)isSupported;	// IMP=0x00100000000091cd
+ (id)storeQueue;	// IMP=0x0010000000009176
+ (long long)state;	// IMP=0x0010000000009124

@end

