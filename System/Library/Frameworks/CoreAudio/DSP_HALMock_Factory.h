//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface DSP_HALMock_Factory : NSObject
{
    int _featureFlag;	// 8 = 0x8
}

@property(nonatomic) int featureFlag; // @synthesize featureFlag=_featureFlag;
- (id)createProcessor:(id)arg1 withHost:(id)arg2;	// IMP=0x000000000004da5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

