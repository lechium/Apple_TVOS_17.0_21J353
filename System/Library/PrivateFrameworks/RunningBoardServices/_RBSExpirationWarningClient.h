//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _RBSExpirationWarningClient : NSObject
{
    CDUnknownBlockType _block;	// 8 = 0x8
    CDUnknownBlockType _invalidationBlock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001cf00
- (void)invalidate;	// IMP=0x000000000001ceee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

