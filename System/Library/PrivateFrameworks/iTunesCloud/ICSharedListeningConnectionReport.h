//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface ICSharedListeningConnectionReport : NSObject
{
    NSString *_sharedListeningSessionIdentifier;	// 8 = 0x8
    NSString *_groupSessionIdentifier;	// 16 = 0x10
    NSMutableArray *_topLevelEvents;	// 24 = 0x18
    NSMapTable *_allEvents;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001b7a94
@property(retain, nonatomic) NSMapTable *allEvents; // @synthesize allEvents=_allEvents;
@property(retain, nonatomic) NSMutableArray *topLevelEvents; // @synthesize topLevelEvents=_topLevelEvents;
@property(copy, nonatomic) NSString *groupSessionIdentifier; // @synthesize groupSessionIdentifier=_groupSessionIdentifier;
@property(copy, nonatomic) NSString *sharedListeningSessionIdentifier; // @synthesize sharedListeningSessionIdentifier=_sharedListeningSessionIdentifier;
@property(readonly, nonatomic) id analyticsPayload;
- (void)_addEvents:(id)arg1 toReportString:(id)arg2 eventLevel:(long long)arg3;	// IMP=0x00000000001b7686
@property(readonly, nonatomic) NSString *formattedReport;
- (void)endEvent:(id)arg1 withError:(id)arg2;	// IMP=0x00000000001b722f
- (void)endEvent:(id)arg1;	// IMP=0x00000000001b721b
- (void)startEvent:(id)arg1 withParentEvent:(id)arg2;	// IMP=0x00000000001b70bf
- (void)startEvent:(id)arg1;	// IMP=0x00000000001b70ab
- (id)init;	// IMP=0x00000000001b7026

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

