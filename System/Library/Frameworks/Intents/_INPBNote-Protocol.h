//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBDataString, _INPBDateTime, _INPBNoteContent;

@protocol _INPBNote <NSObject>
+ (Class)contentType;
@property(readonly, nonatomic) _Bool hasTitle;
@property(retain, nonatomic) _INPBDataString *title;
@property(readonly, nonatomic) _Bool hasModifiedDateTime;
@property(retain, nonatomic) _INPBDateTime *modifiedDateTime;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) _Bool hasGroupName;
@property(retain, nonatomic) _INPBDataString *groupName;
@property(readonly, nonatomic) _Bool hasCreatedDateTime;
@property(retain, nonatomic) _INPBDateTime *createdDateTime;
@property(readonly, nonatomic) unsigned long long contentsCount;
@property(copy, nonatomic) NSArray *contents;
@property(readonly, nonatomic) _Bool hasAccountIdentifier;
@property(copy, nonatomic) NSString *accountIdentifier;
- (_INPBNoteContent *)contentAtIndex:(unsigned long long)arg1;
- (void)addContent:(_INPBNoteContent *)arg1;
- (void)clearContents;
@end

