//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCNBoundingBox : NSObject
{
    struct SCNVector3 min;	// 8 = 0x8
    struct SCNVector3 max;	// 20 = 0x14
}

@property(nonatomic) struct SCNVector3 max; // @synthesize max;
@property(nonatomic) struct SCNVector3 min; // @synthesize min;
- (id)description;	// IMP=0x0000000000288d44

@end

