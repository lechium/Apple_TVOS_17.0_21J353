//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVMediaSelectionOption.h"

@class AVWeakReference, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AVMediaSelectionKeyValueOption : AVMediaSelectionOption
{
    id _groupID;	// 16 = 0x10
    id _groupMediaType;	// 24 = 0x18
    NSString *_optionMediaType;	// 32 = 0x20
    NSDictionary *_dictionary;	// 40 = 0x28
    NSDictionary *_localizedMediaSelectionOptionDisplayNames;	// 48 = 0x30
    AVWeakReference *_weakReferenceToGroup;	// 56 = 0x38
    _Bool _displaysNonForcedSubtitles;	// 64 = 0x40
}

- (id)metadataForFormat:(id)arg1;	// IMP=0x000000000011ab1a
- (id)availableMetadataFormats;	// IMP=0x000000000011ab01
- (id)commonMetadata;	// IMP=0x000000000011a746
- (id)locale;	// IMP=0x000000000011a6e0
- (_Bool)isPlayable;	// IMP=0x000000000011a6d8
- (id)mediaType;	// IMP=0x000000000011a6c7
- (id)_groupMediaType;	// IMP=0x000000000011a6b6
- (id)_groupID;	// IMP=0x000000000011a6a5
- (id)group;	// IMP=0x000000000011a688
- (id)dictionary;	// IMP=0x000000000011a677
- (unsigned long long)hash;	// IMP=0x000000000011a60a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000011a51c
- (void)dealloc;	// IMP=0x000000000011a48c
- (id)initWithAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3;	// IMP=0x000000000011a315

@end
