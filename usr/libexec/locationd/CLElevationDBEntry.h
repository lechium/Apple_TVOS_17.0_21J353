//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLElevationDBEntry : NSObject
{
    double _timestamp;	// 8 = 0x8
    double _pressure;	// 16 = 0x10
    double _pressureUncertainty;	// 24 = 0x18
}

@property(nonatomic) double pressureUncertainty; // @synthesize pressureUncertainty=_pressureUncertainty;
@property(nonatomic) double pressure; // @synthesize pressure=_pressure;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (id)init;	// IMP=0x00100000009631ef

@end

