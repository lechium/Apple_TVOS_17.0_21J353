//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface ObjCRenameSequence : NSObject
{
    MISSING_TYPE *renameSequence;	// 8 = 0x8
    MISSING_TYPE *renameAddedBySequence;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003db410
- (id)init;	// IMP=0x00000000003db3a0
@property(nonatomic, readonly) NSString *description;
- (void)addAddedByVersion:(id)arg1;	// IMP=0x00000000003db1d0
- (void)addAddedByReplica:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000003da8a0
- (void)addWithReplica:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000003da600
@property(nonatomic, readonly) _Bool isEmpty;

@end

