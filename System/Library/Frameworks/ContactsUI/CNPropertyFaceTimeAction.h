//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNPropertyBestIDSValueQuery;

__attribute__((visibility("hidden")))
@interface CNPropertyFaceTimeAction
{
    long long _type;	// 8 = 0x8
    CNPropertyBestIDSValueQuery *_bestFaceTimeQuery;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007f8c4
@property(retain, nonatomic) CNPropertyBestIDSValueQuery *bestFaceTimeQuery; // @synthesize bestFaceTimeQuery=_bestFaceTimeQuery;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void)queryComplete;	// IMP=0x000000000007f7e0
- (void)_queryFaceTimeStatus;	// IMP=0x000000000007f706
- (void)performActionForItem:(id)arg1 sender:(id)arg2;	// IMP=0x000000000007f577
- (_Bool)canPerformAction;	// IMP=0x000000000007f514
- (void)dealloc;	// IMP=0x000000000007f4cb
- (id)initWithContact:(id)arg1 propertyItems:(id)arg2;	// IMP=0x000000000007f473

@end

