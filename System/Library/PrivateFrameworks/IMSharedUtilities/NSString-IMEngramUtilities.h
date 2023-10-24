//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (IMEngramUtilities)
- (id)__im_engramDataRepresentation;	// IMP=0x0030000000008b5e
- (id)cnLabelForPerson:(id)arg1;	// IMP=0x0030000000009b45
- (id)associatedPerson;	// IMP=0x0030000000009ab7
- (_Bool)isEqualToBlockListAddress:(id)arg1;	// IMP=0x00300000000099a6
- (id)im_livePhotoBundlePath;	// IMP=0x003000000000c194
- (_Bool)im_markFileAsPurgeable:(_Bool)arg1;	// IMP=0x003000000000c18c
- (id)im_livePhotoVideoPath;	// IMP=0x003000000000c108
- (id)im_livePhotoImagePath;	// IMP=0x003000000000c084
- (_Bool)im_isLivePhoto;	// IMP=0x003000000000bfee
- (id)_im_filePathWithPossibleAlternateExtensions:(id)arg1;	// IMP=0x003000000000be60
- (id)im_lastPathComponent;	// IMP=0x003000000000be1c
- (_Bool)isEqualToPhoneNumber:(id)arg1;	// IMP=0x00300000000237d8
- (id)formatForDisplayIfPhoneNumber;	// IMP=0x0030000000023778
- (id)formattedPhoneNumber;	// IMP=0x003000000002364e
- (id)im_stripCategoryLabel;	// IMP=0x0030000000023940
@property(readonly, nonatomic) NSString *__im_emojiStickerID;
@property(readonly, nonatomic) NSString *__im_emojiString;
@property(readonly, nonatomic) _Bool __im_isEmojiStickerID;
@property(readonly, nonatomic) _Bool __im_hasEmoji;
- (_Bool)isArchivable_im;	// IMP=0x0030000000038317
@property(readonly, nonatomic) _Bool im_isWellFormedChatGUID;
@property(readonly, nonatomic) _Bool im_matchesSOSMapURL;
- (id)__im_apfsCompatibleFilename;	// IMP=0x00300000000aec6e
- (id)__im_stringBySafelyAppendingPathComponent:(id)arg1;	// IMP=0x00300000000aec05
- (id)__im_filePathWithVariant:(id)arg1;	// IMP=0x00300000000aeb68
@end
