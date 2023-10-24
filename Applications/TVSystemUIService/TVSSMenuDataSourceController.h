//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, TVSObserverSet, TVSSMenuDataSource;

@interface TVSSMenuDataSourceController : NSObject
{
    unsigned long long _mode;	// 8 = 0x8
    NSArray *_providers;	// 16 = 0x10
    TVSSMenuDataSource *_dataSource;	// 24 = 0x18
    TVSObserverSet *_observers;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000077a90
@property(readonly, nonatomic) TVSObserverSet *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) TVSSMenuDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, copy, nonatomic) NSArray *providers; // @synthesize providers=_providers;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (id)_createNewDataSource;	// IMP=0x0010000000077780
- (void)_notifyDataSourceDidChange;	// IMP=0x0010000000077620
- (void)_updateDataSource;	// IMP=0x00100000000775c0
- (void)providerItemsDidChange:(id)arg1;	// IMP=0x0010000000077570
- (void)removeControllerObserver:(id)arg1;	// IMP=0x00100000000774f0
- (void)addControllerObserver:(id)arg1;	// IMP=0x0010000000077460
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00100000000771c0
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0010000000077120
- (id)succinctDescriptionBuilder;	// IMP=0x0010000000076f00
- (id)succinctDescription;	// IMP=0x0010000000076e90
- (void)dealloc;	// IMP=0x0010000000076c80
- (id)initWithMode:(unsigned long long)arg1 providers:(id)arg2;	// IMP=0x0010000000076940

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

