//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (MessagePartUtilities)
+ (void)__im_diffPartIndexesInEditedMessage:(id)arg1 previousMessage:(id)arg2 editedPartIndexes:(out id *)arg3 removedPartIndexes:(out id *)arg4;	// IMP=0x006000000001eb52
- (id)__im_messagePartIndexToRangeMap;	// IMP=0x001000000001f0ac
- (id)__im_rangeToMessagePartIndexMap;	// IMP=0x001000000001ef32
- (id)__im_messageTextByRemovingMessagePartIndex:(long long)arg1;	// IMP=0x001000000001ea5d
- (id)__im_messageTextByReplacingMessagePartIndex:(long long)arg1 withNewPartText:(id)arg2;	// IMP=0x001000000001e87d
- (id)__im_messagePartMatchingRange:(struct _NSRange)arg1;	// IMP=0x001000000001e59a
- (id)__im_messagePartMatchingPartIndex:(long long)arg1;	// IMP=0x001000000001e2fc
- (long long)__im_insertionIndexForMessagePartBody:(id)arg1;	// IMP=0x001000000001e113
- (_Bool)__im_containsAttributedValue:(id)arg1;	// IMP=0x001000000001deb7
- (id)__im_partDescriptorWithIndex:(long long)arg1 range:(struct _NSRange)arg2 totalPartCount:(unsigned long long)arg3;	// IMP=0x001000000001de33
- (void)__im_visitMessageParts:(CDUnknownBlockType)arg1;	// IMP=0x001000000001dc51
- (id)__im_dataDetectedURLsFromAttributes;	// IMP=0x001000000001d8c1
- (id)__im_attributedSubstringFromRange:(struct _NSRange)arg1;	// IMP=0x001000000001d82d
- (id)__im_messagePartIndexes;	// IMP=0x001000000001d6e8
- (unsigned long long)__im_countMessageParts;	// IMP=0x001000000001d5ea
@end

