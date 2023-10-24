//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _bmFMDatabase;
@protocol OS_dispatch_queue;

@interface _bmFMDatabaseQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _bmFMDatabase *_db;	// 16 = 0x10
    int _openFlags;	// 24 = 0x18
    NSString *_path;	// 32 = 0x20
    NSString *_vfsName;	// 40 = 0x28
}

+ (Class)databaseClass;	// IMP=0x004000000004a2bf
+ (id)databaseQueueWithURL:(id)arg1 flags:(int)arg2;	// IMP=0x001000000004a25a
+ (id)databaseQueueWithPath:(id)arg1 flags:(int)arg2;	// IMP=0x001000000004a204
+ (id)databaseQueueWithURL:(id)arg1;	// IMP=0x001000000004a1a2
+ (id)databaseQueueWithPath:(id)arg1;	// IMP=0x001000000004a159
- (void).cxx_destruct;	// IMP=0x002000000004b05c
@property(copy) NSString *vfsName; // @synthesize vfsName=_vfsName;
@property(readonly) int openFlags; // @synthesize openFlags=_openFlags;
@property(retain) NSString *path; // @synthesize path=_path;
- (_Bool)checkpoint:(int)arg1 name:(id)arg2 logFrameCount:(int *)arg3 checkpointCount:(int *)arg4 error:(id *)arg5;	// IMP=0x001000000004aea3
- (_Bool)checkpoint:(int)arg1 name:(id)arg2 error:(id *)arg3;	// IMP=0x001000000004ae7e
- (_Bool)checkpoint:(int)arg1 error:(id *)arg2;	// IMP=0x000000000004ae57
- (id)inSavePoint:(CDUnknownBlockType)arg1;	// IMP=0x001000000004ab57
- (void)inImmediateTransaction:(CDUnknownBlockType)arg1;	// IMP=0x001000000004ab3d
- (void)inExclusiveTransaction:(CDUnknownBlockType)arg1;	// IMP=0x001000000004ab26
- (void)inDeferredTransaction:(CDUnknownBlockType)arg1;	// IMP=0x001000000004ab0c
- (void)inTransaction:(CDUnknownBlockType)arg1;	// IMP=0x001000000004aaf5
- (void)beginTransaction:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000004a8fa
- (void)inDatabase:(CDUnknownBlockType)arg1;	// IMP=0x001000000004a7c6
- (id)database;	// IMP=0x001000000004a6fd
- (void)interrupt;	// IMP=0x001000000004a6c0
- (void)close;	// IMP=0x001000000004a63b
- (void)dealloc;	// IMP=0x001000000004a5f3
- (id)init;	// IMP=0x001000000004a5df
- (id)initWithPath:(id)arg1;	// IMP=0x001000000004a5c5
- (id)initWithURL:(id)arg1;	// IMP=0x001000000004a56f
- (id)initWithURL:(id)arg1 flags:(int)arg2;	// IMP=0x001000000004a513
- (id)initWithPath:(id)arg1 flags:(int)arg2;	// IMP=0x001000000004a4fe
- (id)initWithPath:(id)arg1 flags:(int)arg2 vfs:(id)arg3;	// IMP=0x001000000004a34e
- (id)initWithURL:(id)arg1 flags:(int)arg2 vfs:(id)arg3;	// IMP=0x001000000004a2d0

@end

