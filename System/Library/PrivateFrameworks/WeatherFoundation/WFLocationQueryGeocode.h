//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLGeocoder, MKLocalSearch, MKLocalSearchCompletion, NSString, WFResponse, WFTaskIdentifier;

__attribute__((visibility("hidden")))
@interface WFLocationQueryGeocode : NSObject
{
    _Bool _finished;	// 8 = 0x8
    WFTaskIdentifier *identifier;	// 16 = 0x10
    MKLocalSearchCompletion *_searchCompletion;	// 24 = 0x18
    NSString *_searchString;	// 32 = 0x20
    CDUnknownBlockType _resultHandler;	// 40 = 0x28
    WFResponse *_response;	// 48 = 0x30
    CLGeocoder *_reverseGeocoder;	// 56 = 0x38
    MKLocalSearch *_search;	// 64 = 0x40
    struct CLLocationCoordinate2D _searchCoordinate;	// 72 = 0x48
    struct CLLocationCoordinate2D _unshiftedCoordinate;	// 88 = 0x58
}

+ (id)queryWithSearchString:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000bcbe
+ (void)invalidateCaches;	// IMP=0x001000000000bbbc
+ (id)queryWithSearchCompletion:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000bb46
+ (id)queryWithCoordinate:(struct CLLocationCoordinate2D)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000baba
+ (id)queryWithDictionaryRepresentation:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000b766
- (void).cxx_destruct;	// IMP=0x000000000000d4e1
@property(nonatomic) struct CLLocationCoordinate2D unshiftedCoordinate; // @synthesize unshiftedCoordinate=_unshiftedCoordinate;
@property(nonatomic) struct CLLocationCoordinate2D searchCoordinate; // @synthesize searchCoordinate=_searchCoordinate;
@property(retain, nonatomic) MKLocalSearch *search; // @synthesize search=_search;
@property(retain, nonatomic) CLGeocoder *reverseGeocoder; // @synthesize reverseGeocoder=_reverseGeocoder;
@property(retain) WFResponse *response; // @synthesize response=_response;
@property(copy) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
@property(readonly) NSString *searchString; // @synthesize searchString=_searchString;
@property(readonly) MKLocalSearchCompletion *searchCompletion; // @synthesize searchCompletion=_searchCompletion;
@property(retain) WFTaskIdentifier *identifier; // @synthesize identifier;
- (void)_handleErrorResponse:(id)arg1;	// IMP=0x000000000000d1cc
- (void)handleSearchResponseWithLocation:(id)arg1;	// IMP=0x000000000000d020
- (id)_reverseGeocoderLocation;	// IMP=0x000000000000cf9e
- (id)_mkLocalSearchRequest;	// IMP=0x000000000000cea4
- (_Bool)isLocationValid:(id)arg1;	// IMP=0x000000000000cd00
- (void)_startCLGeocoderReverseGeo;	// IMP=0x000000000000c642
- (void)_startMKLocalSearch;	// IMP=0x000000000000c0c5
- (void)cancel;	// IMP=0x000000000000c04c
- (void)start;	// IMP=0x000000000000bf82
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000be70
- (id)initWithSearchString:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000bd34
- (id)initWithSearchCompletion:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000bbc2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

