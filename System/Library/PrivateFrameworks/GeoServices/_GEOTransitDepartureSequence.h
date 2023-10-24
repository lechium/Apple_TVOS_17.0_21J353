//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOPDDepartureSequence, GEOPDDepartureSequenceContainer, GEOPDStopInfo, NSArray, NSSet, NSString, NSTimeZone;
@protocol GEOTransitLine;

__attribute__((visibility("hidden")))
@interface _GEOTransitDepartureSequence : NSObject
{
    GEOPDDepartureSequence *_sequence;	// 8 = 0x8
    id <GEOTransitLine> _line;	// 16 = 0x10
    NSSet *_nextStopIDs;	// 24 = 0x18
    long long _displayStyle;	// 32 = 0x20
    GEOPDStopInfo *_stopInfo;	// 40 = 0x28
    GEOPDDepartureSequenceContainer *_container;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000117c16d
@property(readonly, nonatomic) NSTimeZone *timeZone;
@property(readonly, nonatomic) unsigned long long walkingETA;
@property(readonly, nonatomic) _Bool hasWalkingETA;
@property(readonly, nonatomic) NSSet *nextStopIDs;
- (id)serviceResumesAfterDate:(id)arg1;	// IMP=0x000000000117be3e
- (id)operatingHoursForDate:(id)arg1 inTimeZone:(id)arg2;	// IMP=0x000000000117badd
- (_Bool)isDepartureDateInactive:(id)arg1 withReferenceDate:(id)arg2;	// IMP=0x000000000117ba37
- (id)frequencyToDescribeAtDate:(id)arg1;	// IMP=0x000000000117b8ba
- (double)frequencyForSortingAtDate:(id)arg1;	// IMP=0x000000000117b728
- (_Bool)hasFrequencyAtDate:(id)arg1;	// IMP=0x000000000117b5be
- (id)departuresValidForDate:(id)arg1;	// IMP=0x000000000117b4ab
- (id)firstDepartureValidForDate:(id)arg1;	// IMP=0x000000000117b33b
- (id)firstOpenOperatingDateOnOrAfterDate:(id)arg1;	// IMP=0x000000000117b158
- (id)firstDepartureFrequencyOnOrAfterDate:(id)arg1;	// IMP=0x000000000117af84
- (unsigned long long)numberOfDeparturesAfterDate:(id)arg1;	// IMP=0x000000000117adb2
- (id)firstDepartureOnOrAfterDate:(id)arg1;	// IMP=0x000000000117abb7
- (id)firstDepartureAfterDate:(id)arg1;	// IMP=0x000000000117ab4d
- (void)_enumerateDeparturesValidForDate:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000117a83b
- (_Bool)isValidForDate:(id)arg1 inTimeZone:(id)arg2;	// IMP=0x000000000117a742
- (_Bool)areOperatingHours:(id)arg1 activeForDate:(id)arg2;	// IMP=0x000000000117a463
@property(readonly, nonatomic) long long displayStyle;
@property(readonly, nonatomic) _Bool isLowFrequency;
@property(readonly, nonatomic) NSArray *operatingHours;
@property(readonly, nonatomic) NSArray *containerLabelItems;
@property(readonly, nonatomic) NSString *containerDisplayName;
@property(readonly, nonatomic) NSString *originName;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSString *headsign;
@property(readonly, nonatomic) NSString *direction;
@property(readonly, nonatomic) unsigned long long transitId;
@property(readonly, nonatomic) id <GEOTransitLine> line;
@property(readonly, nonatomic) NSArray *frequencies;
- (unsigned long long)stopId;	// IMP=0x000000000117a248
@property(readonly, nonatomic) NSArray *departures;
@property(readonly, nonatomic) unsigned long long departureTimeDisplayStyle;
- (id)initWithSequence:(id)arg1 line:(id)arg2 pbLine:(id)arg3 stopInfo:(id)arg4 container:(id)arg5;	// IMP=0x0000000001179ea8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
