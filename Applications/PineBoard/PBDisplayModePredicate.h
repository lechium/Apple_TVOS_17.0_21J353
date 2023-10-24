//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PBDisplayModePredicate : NSObject
{
    long long _dynamicRange;	// 8 = 0x8
    double _frameRate;	// 16 = 0x10
    long long _SDRColorMapping;	// 24 = 0x18
}

+ (id)predicatesWithPreferredSDRColorMapping:(long long)arg1 frameRate:(double)arg2;	// IMP=0x004000000008b04f
+ (id)predicatWithDynamicRange:(long long)arg1 frameRate:(double)arg2;	// IMP=0x001000000008aff5
@property(readonly, nonatomic) long long SDRColorMapping; // @synthesize SDRColorMapping=_SDRColorMapping;
@property(readonly, nonatomic) double frameRate; // @synthesize frameRate=_frameRate;
@property(readonly, nonatomic) long long dynamicRange; // @synthesize dynamicRange=_dynamicRange;
- (unsigned long long)hash;	// IMP=0x001000000008b49d
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000008b3a8
- (id)description;	// IMP=0x001000000008b270
@property(readonly, nonatomic) double roundedFrameRate;
- (id)initWithDynamicRange:(long long)arg1 SDRColorMapping:(long long)arg2 frameRate:(double)arg3;	// IMP=0x001000000008b1c7

@end

