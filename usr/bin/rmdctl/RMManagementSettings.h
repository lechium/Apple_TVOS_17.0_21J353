//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;

@interface RMManagementSettings : NSObject
{
    NSObject *_settingsLock;	// 8 = 0x8
    NSURL *_settingsURL;	// 16 = 0x10
    NSMutableDictionary *_cachedSettings;	// 24 = 0x18
}

+ (void)reset;	// IMP=0x002000000000fd61
+ (id)sharedSettings;	// IMP=0x001000000000fc95
- (void).cxx_destruct;	// IMP=0x002000000001064e
@property(retain, nonatomic) NSMutableDictionary *cachedSettings; // @synthesize cachedSettings=_cachedSettings;
@property(retain, nonatomic) NSURL *settingsURL; // @synthesize settingsURL=_settingsURL;
- (void)_writeCachedSettings;	// IMP=0x00100000000104b1
- (void)_readCachedSettings;	// IMP=0x0010000000010133
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000010055
- (void)removeValueForKey:(id)arg1;	// IMP=0x001000000000ff94
- (id)valueForKey:(id)arg1;	// IMP=0x001000000000fece
- (id)initWithURL:(id)arg1;	// IMP=0x001000000000fe49

@end

