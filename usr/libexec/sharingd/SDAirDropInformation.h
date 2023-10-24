//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableDictionary, SDStatusMonitor;
@protocol SDAirDropInformationDelegate;

@interface SDAirDropInformation : NSObject
{
    _Bool _started;	// 8 = 0x8
    SDStatusMonitor *_monitor;	// 16 = 0x10
    NSMutableDictionary *_properties;	// 24 = 0x18
    MISSING_TYPE *_delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000ad9dc
@property __weak id <SDAirDropInformationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stop;	// IMP=0x00100000000ad997
- (void)start;	// IMP=0x00100000000ad95a
- (void)removeObservers;	// IMP=0x00100000000ad907
- (void)addObservers;	// IMP=0x00100000000ad7ce
- (void)somethingChanged:(id)arg1;	// IMP=0x00100000000ad7bc
- (void)setInformationAndNotify;	// IMP=0x00100000000ad471
- (void)setProperty:(void *)arg1 forKey:(id)arg2;	// IMP=0x00100000000ad358
- (_Bool)boolValue:(void *)arg1;	// IMP=0x00100000000ad31e
- (void)dealloc;	// IMP=0x00100000000ad2e0
- (id)init;	// IMP=0x00100000000ad257

@end

