//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AVOutputDeviceLegacyFrecentsWriter : NSObject
{
    NSMutableDictionary *_updatedFrecentsList;	// 8 = 0x8
    NSMutableArray *_keysToRemove;	// 16 = 0x10
}

+ (id)defaultFrecentsWriter;	// IMP=0x00100000000d44c9
- (_Bool)persistToDiskReturningError:(id *)arg1;	// IMP=0x00000000000d460d
- (void)removeFrecencyInfoForDeviceID:(id)arg1;	// IMP=0x00000000000d45cb
@property(readonly, nonatomic) long long numberOfKeysToBeSet;
- (void)setFrecencyInfo:(id)arg1 forDeviceID:(id)arg2;	// IMP=0x00000000000d459f
- (void)dealloc;	// IMP=0x00000000000d4555
- (id)init;	// IMP=0x00000000000d44db

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

