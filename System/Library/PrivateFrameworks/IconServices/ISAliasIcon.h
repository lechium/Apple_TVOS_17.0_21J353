//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ISConcreteIcon, NSArray;

__attribute__((visibility("hidden")))
@interface ISAliasIcon
{
    ISConcreteIcon *_icon;	// 16 = 0x10
    NSArray *_decorations;	// 24 = 0x18
    id _alias;	// 32 = 0x20
    ISConcreteIcon *_resolvedIcon;	// 40 = 0x28
}

+ (id)aliasUUID;	// IMP=0x0060000000038bd2
+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000038bca
+ (id)_iconForValues:(id)arg1;	// IMP=0x0060000000039bb9
+ (id)_iconForBookmarkData:(id)arg1;	// IMP=0x0060000000039adf
- (void).cxx_destruct;	// IMP=0x0000000000039a8c
@property(readonly) ISConcreteIcon *resolvedIcon; // @synthesize resolvedIcon=_resolvedIcon;
@property(readonly) id alias; // @synthesize alias=_alias;
- (id)decorations;	// IMP=0x0000000000039a4f
- (id)makeResourceProvider;	// IMP=0x00000000000399ef
@property(readonly) ISConcreteIcon *icon; // @synthesize icon=_icon;
- (void)resolve;	// IMP=0x00000000000395ac
- (id)description;	// IMP=0x0000000000039522
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000039483
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003929a
- (id)initWithBookmarkData:(id)arg1 decorations:(id)arg2;	// IMP=0x0000000000038f7d
- (id)initWithBookmarkData:(id)arg1;	// IMP=0x0000000000038f64
- (id)initWithAliasURL:(id)arg1;	// IMP=0x0000000000038c41

@end

