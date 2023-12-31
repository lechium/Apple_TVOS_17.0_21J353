//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIImageLoader.h"

@class NSItemProvider, NSProgress, NSString;

__attribute__((visibility("hidden")))
@interface _UINSItemProviderImageLoader : _UIImageLoader
{
    NSItemProvider *_itemProvider;	// 48 = 0x30
    NSString *_typeIdentifier;	// 56 = 0x38
    NSProgress *__progress;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000067d6d4
@property(retain, setter=_setProgress:) NSProgress *_progress; // @synthesize _progress=__progress;
- (_Bool)_really_cancel;	// IMP=0x000000000067d66d
- (void)_really_loadImage:(CDUnknownBlockType)arg1;	// IMP=0x000000000067d4e9
- (id)initWithItemProvider:(id)arg1 typeIdentifier:(id)arg2;	// IMP=0x000000000067d405

@end

