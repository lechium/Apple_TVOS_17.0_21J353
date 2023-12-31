//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, RTRoutineManager;

__attribute__((visibility("hidden")))
@interface RTRoutineManagerExportedObject : NSObject
{
    RTRoutineManager *_routineManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000006f8c
@property(nonatomic) __weak RTRoutineManager *routineManager; // @synthesize routineManager=_routineManager;
- (void)onVehicleEvents:(id)arg1 error:(id)arg2;	// IMP=0x0000000000006eda
- (void)onScenarioTrigger:(id)arg1 withError:(id)arg2;	// IMP=0x0000000000006e4f
- (void)onLeechedLowConfidenceVisit:(id)arg1 withError:(id)arg2;	// IMP=0x0000000000006dc4
- (void)onLeechedVisit:(id)arg1 withError:(id)arg2;	// IMP=0x0000000000006d39
- (void)onVisit:(id)arg1 withError:(id)arg2;	// IMP=0x0000000000006cae
- (id)initWithRoutineManager:(id)arg1;	// IMP=0x0000000000006c4a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

