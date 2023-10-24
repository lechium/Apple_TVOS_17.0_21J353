//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VUIAction, VUIDocumentDataSource, VUIMediaEntity;

__attribute__((visibility("hidden")))
@interface VUIEventDataSource : NSObject
{
    VUIDocumentDataSource *_preActionDocumentDataSource;	// 8 = 0x8
    VUIAction *_preAction;	// 16 = 0x10
    VUIDocumentDataSource *_documentDataSource;	// 24 = 0x18
    VUIAction *_action;	// 32 = 0x20
    VUIDocumentDataSource *_postActionDocumentDataSource;	// 40 = 0x28
    VUIAction *_postAction;	// 48 = 0x30
    VUIMediaEntity *_mediaEntity;	// 56 = 0x38
}

+ (id)_actionForKey:(id)arg1 eventDict:(id)arg2 appContext:(id)arg3;	// IMP=0x00600000002489f2
+ (id)_documentDataSourceWithDict:(id)arg1;	// IMP=0x00600000002489d9
+ (id)attachPrefetchedDict:(id)arg1 eventDict:(id)arg2;	// IMP=0x00600000002488e0
+ (id)eventDataSourceWithEventDict:(id)arg1 appContext:(id)arg2;	// IMP=0x0060000000248634
+ (id)selectEventDataSourceWithLibraryMediaEntity:(id)arg1;	// IMP=0x0060000000248c09
- (void).cxx_destruct;	// IMP=0x0000000000248b3f
@property(retain, nonatomic) VUIMediaEntity *mediaEntity; // @synthesize mediaEntity=_mediaEntity;
@property(retain, nonatomic) VUIAction *postAction; // @synthesize postAction=_postAction;
@property(retain, nonatomic) VUIDocumentDataSource *postActionDocumentDataSource; // @synthesize postActionDocumentDataSource=_postActionDocumentDataSource;
@property(retain, nonatomic) VUIAction *action; // @synthesize action=_action;
@property(retain, nonatomic) VUIDocumentDataSource *documentDataSource; // @synthesize documentDataSource=_documentDataSource;
@property(retain, nonatomic) VUIAction *preAction; // @synthesize preAction=_preAction;
@property(retain, nonatomic) VUIDocumentDataSource *preActionDocumentDataSource; // @synthesize preActionDocumentDataSource=_preActionDocumentDataSource;
- (id)_initWithLibraryMediaEntity:(id)arg1;	// IMP=0x0000000000248b9e

@end

