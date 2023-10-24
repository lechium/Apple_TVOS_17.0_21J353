//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface WeatherInMemoryDefaults : NSObject
{
    _Bool _synchronizeWasCalled;	// 8 = 0x8
    NSMutableDictionary *_inMemoryStore;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002b228
@property(readonly) _Bool synchronizeWasCalled; // @synthesize synchronizeWasCalled=_synchronizeWasCalled;
@property(retain) NSMutableDictionary *inMemoryStore; // @synthesize inMemoryStore=_inMemoryStore;
- (void)synchronizeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002b1b2
- (_Bool)synchronize;	// IMP=0x000000000002b1a6
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x000000000002b10b
- (_Bool)boolForKey:(id)arg1;	// IMP=0x000000000002b0c7
- (id)dictionaryForKey:(id)arg1;	// IMP=0x000000000002b0b5
- (id)stringForKey:(id)arg1;	// IMP=0x000000000002b0a3
- (id)arrayForKey:(id)arg1;	// IMP=0x000000000002b091
- (void)removeObjectForKey:(id)arg1;	// IMP=0x000000000002b028
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000002af9d
- (id)objectForKey:(id)arg1;	// IMP=0x000000000002af23
- (id)init;	// IMP=0x000000000002ae0e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
