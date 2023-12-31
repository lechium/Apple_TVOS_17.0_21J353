//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface GEOQuickETATransitDeparturesInfo : NSObject
{
    NSString *_direction;	// 8 = 0x8
    NSString *_headsign;	// 16 = 0x10
    _Bool _departuresHaveFrequency;	// 24 = 0x18
    double _departureFrequency;	// 32 = 0x20
    NSDate *_departureFrequencyValidUntil;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000012cbb06
@property(readonly, nonatomic) NSDate *departureFrequencyValidUntil; // @synthesize departureFrequencyValidUntil=_departureFrequencyValidUntil;
@property(readonly, nonatomic) double departureFrequency; // @synthesize departureFrequency=_departureFrequency;
@property(readonly, nonatomic) _Bool departuresHaveFrequency; // @synthesize departuresHaveFrequency=_departuresHaveFrequency;
@property(readonly, nonatomic) NSString *headsign; // @synthesize headsign=_headsign;
@property(readonly, nonatomic) NSString *direction; // @synthesize direction=_direction;
- (id)_chooseMostImportantTransitLegInRoute:(id)arg1;	// IMP=0x00000000012cb97c
- (id)description;	// IMP=0x00000000012cb8c2
- (id)initWithComposedRoute:(id)arg1;	// IMP=0x00000000012cb81c

@end

