//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface BKFirstBootKernelSemaphoreToken : NSObject
{
    _Bool _semaphoreExists;	// 8 = 0x8
}

+ (id)token;	// IMP=0x0020000000012b9b
- (void)_revertToFirstBoot;	// IMP=0x0020000000012ad4
- (void)unsetToken;	// IMP=0x00100000000129d1
- (_Bool)isTokenSet;	// IMP=0x00100000000129c4
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x00100000000128ca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
