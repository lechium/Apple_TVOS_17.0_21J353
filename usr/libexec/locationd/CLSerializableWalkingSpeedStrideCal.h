//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLSerializableWalkingSpeedStrideCal : NSObject
{
    struct WalkingSpeedStrideCal _strideCal;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000001a4eb5
- (id).cxx_construct;	// IMP=0x00200000001a504a
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001a4f69
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001a4ebd
- (void)getWalkingSpeedStrideCal:(struct WalkingSpeedStrideCal *)arg1;	// IMP=0x00100000001a4e98
- (id)initWithWalkingSpeedStrideCal:(const struct WalkingSpeedStrideCal *)arg1;	// IMP=0x00100000001a4e48

@end
