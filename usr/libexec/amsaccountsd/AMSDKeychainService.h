//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AMSDKeychainService : NSObject
{
}

+ (_Bool)isConnectionEntitled:(id)arg1;	// IMP=0x0020000000023c3e
- (void)testKeychainWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0020000000023e6f
- (void)getPublicKeyHeaderWithAccount:(id)arg1 options:(id)arg2 signatureResult:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000023cc8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

