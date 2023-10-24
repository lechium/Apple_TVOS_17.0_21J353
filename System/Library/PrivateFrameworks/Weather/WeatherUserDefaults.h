//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUserDefaults;

__attribute__((visibility("hidden")))
@interface WeatherUserDefaults : NSObject
{
    NSUserDefaults *_userDefaults;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000088b3
@property(retain) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void)synchronizeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008848
- (_Bool)synchronize;	// IMP=0x0000000000008804
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x000000000000878f
- (_Bool)boolForKey:(id)arg1;	// IMP=0x0000000000008721
- (id)dictionaryForKey:(id)arg1;	// IMP=0x00000000000086a7
- (id)stringForKey:(id)arg1;	// IMP=0x000000000000862d
- (id)arrayForKey:(id)arg1;	// IMP=0x00000000000085b3
- (void)removeObjectForKey:(id)arg1;	// IMP=0x000000000000854a
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000084bf
- (id)objectForKey:(id)arg1;	// IMP=0x0000000000008445
- (id)initWithUserDefaults:(id)arg1;	// IMP=0x00000000000083c6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
