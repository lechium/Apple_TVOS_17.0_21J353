//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface _LSDModificationPendingSaveToken : NSObject
{
    NSMutableArray *_waiters;	// 8 = 0x8
    NSUUID *_uuid;	// 16 = 0x10
    struct optional<NSError *> _saveError;	// 24 = 0x18
    struct unfair_lock_mutex _mutex;	// 40 = 0x28
}

- (id).cxx_construct;	// IMP=0x00000000001384e9
- (void).cxx_destruct;	// IMP=0x00000000001384b1
- (void)saveDidHappen:(_Bool)arg1 error:(id)arg2;	// IMP=0x00000000001381ab
- (void)waitForResult:(CDUnknownBlockType)arg1;	// IMP=0x0000000000137fe3
- (id)initWithUUID:(id)arg1;	// IMP=0x0000000000137f36

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

