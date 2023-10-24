//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID, UACornerActionManager;

@interface UACornerActionManagerHandler : NSObject
{
    _Bool _suspended;	// 8 = 0x8
    _Bool _terminated;	// 9 = 0x9
    NSUUID *_uuid;	// 16 = 0x10
    UACornerActionManager *_manager;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    long long _priority;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000132dc
@property(readonly) _Bool terminated; // @synthesize terminated=_terminated;
@property(readonly) long long priority; // @synthesize priority=_priority;
@property(copy) NSString *name; // @synthesize name=_name;
@property(readonly, retain) UACornerActionManager *manager; // @synthesize manager=_manager;
@property(readonly, retain) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)statusString;	// IMP=0x0010000000013184
- (_Bool)terminate;	// IMP=0x001000000001301f
- (_Bool)resume;	// IMP=0x0010000000012f00
- (_Bool)suspend;	// IMP=0x0010000000012dda
@property _Bool suspended;
@property(readonly) _Bool active;
- (id)initWithManager:(id)arg1 name:(id)arg2;	// IMP=0x0010000000012b50

@end

