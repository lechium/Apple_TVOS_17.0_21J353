//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NSString;

@interface NSArray (HFUtilities)
+ (id)hf_arrayWithNumbersInRange:(struct _NSRange)arg1 stride:(unsigned long long)arg2;	// IMP=0x00100000000655ab
- (id)hf_prettyFullDescription;	// IMP=0x00100000000ad7e2
- (id)hf_prettyExpensiveDescription;	// IMP=0x00100000000ad776
- (id)hf_prettyDescription;	// IMP=0x00100000000ad70a
- (void)hf_fanOutAtIndex:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001898c8
- (id)hf_firstMostCommonObject;	// IMP=0x00100000001896f2
- (unsigned long long)computeHashFromContents;	// IMP=0x00100000001d7a7c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

