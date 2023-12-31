//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMFSNode, MCMPOSIXUser, NSString, NSURL;
@protocol MCMManagedPath;

__attribute__((visibility("hidden")))
@interface MCMManagedPath : NSObject
{
    unsigned short _mode;	// 8 = 0x8
    int _dpClass;	// 12 = 0xc
    NSURL *_url;	// 16 = 0x10
    unsigned long long _flags;	// 24 = 0x18
    unsigned long long _ACLConfig;	// 32 = 0x20
    MCMPOSIXUser *_owner;	// 40 = 0x28
    id <MCMManagedPath> _parent;	// 48 = 0x30
    MCMFSNode *_fsNode;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000006e5f4
@property(retain, nonatomic) MCMFSNode *fsNode; // @synthesize fsNode=_fsNode;
@property(readonly, nonatomic) id <MCMManagedPath> parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) MCMPOSIXUser *owner; // @synthesize owner=_owner;
@property(readonly, nonatomic) int dpClass; // @synthesize dpClass=_dpClass;
@property(readonly, nonatomic) unsigned short mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) unsigned long long ACLConfig; // @synthesize ACLConfig=_ACLConfig;
@property(readonly, nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006e27c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006e1ec
- (_Bool)isEqualToManagedPath:(id)arg1;	// IMP=0x000000000006e1a7
@property(readonly) unsigned long long hash;
- (id)managedPathByAppendingPathComponent:(id)arg1 flags:(unsigned long long)arg2 ACLConfig:(unsigned long long)arg3 mode:(unsigned short)arg4 dpClass:(int)arg5 owner:(id)arg6;	// IMP=0x000000000006e044
- (id)initWithURL:(id)arg1 flags:(unsigned long long)arg2 ACLConfig:(unsigned long long)arg3 mode:(unsigned short)arg4 dpClass:(int)arg5 owner:(id)arg6 parent:(id)arg7;	// IMP=0x000000000006df22

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

