//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class CLLocation, NSMutableArray;

__attribute__((visibility("hidden")))
@interface HMDLocationClusterGroup : HMFObject
{
    CLLocation *_center;	// 8 = 0x8
    NSMutableArray *_locations;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000af4698
@property(readonly) NSMutableArray *locations; // @synthesize locations=_locations;
@property(readonly, copy) CLLocation *center; // @synthesize center=_center;
- (id)attributeDescriptions;	// IMP=0x0000000000af452a
- (id)initWithCenter:(id)arg1;	// IMP=0x0000000000af4476

@end

