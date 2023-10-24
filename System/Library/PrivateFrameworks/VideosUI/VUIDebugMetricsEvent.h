//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VUIDebugMetricsEvent : NSObject
{
    NSArray *_eventData;	// 8 = 0x8
    NSDictionary *_rawData;	// 16 = 0x10
    NSArray *_sortedPageKeys;	// 24 = 0x18
    NSArray *_sortedPrimaryKeys;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001a1a88
@property(retain, nonatomic) NSArray *sortedPrimaryKeys; // @synthesize sortedPrimaryKeys=_sortedPrimaryKeys;
@property(retain, nonatomic) NSArray *sortedPageKeys; // @synthesize sortedPageKeys=_sortedPageKeys;
@property(retain, nonatomic) NSDictionary *rawData; // @synthesize rawData=_rawData;
@property(retain, nonatomic) NSArray *eventData; // @synthesize eventData=_eventData;
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00000000001a1843
@property(readonly, nonatomic) NSString *pageContext;
@property(readonly, nonatomic) NSString *eventType;
@property(readonly, nonatomic) NSDate *eventDate;
@property(readonly, nonatomic) NSDictionary *rawEvent;
- (id)_sortKeys:(id)arg1;	// IMP=0x00000000001a1590
- (id)initWithEventDictionary:(id)arg1 termCollater:(id)arg2;	// IMP=0x00000000001a08f2

@end

