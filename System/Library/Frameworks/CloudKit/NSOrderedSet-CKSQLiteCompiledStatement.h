//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOrderedSet.h>

@class NSString;

@interface NSOrderedSet (CKSQLiteCompiledStatement)
- (id)cksqlcs_appendSQLConstantValueToString:(id)arg1;	// IMP=0x002000000006ee64
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;	// IMP=0x00200000000c5d1d
- (id)CKDeepCopyWithLeafNodeCopyBlock:(CDUnknownBlockType)arg1;	// IMP=0x002000000026861f
- (id)CKDeepCopy;	// IMP=0x00200000002682ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

