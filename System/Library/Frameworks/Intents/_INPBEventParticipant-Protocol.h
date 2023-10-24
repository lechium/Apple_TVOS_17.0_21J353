//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBContact;

@protocol _INPBEventParticipant <NSObject>
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status;
@property(readonly, nonatomic) _Bool hasPerson;
@property(retain, nonatomic) _INPBContact *person;
@property(nonatomic) _Bool hasIsUser;
@property(nonatomic) _Bool isUser;
@property(nonatomic) _Bool hasIsEventOrganizer;
@property(nonatomic) _Bool isEventOrganizer;
- (int)StringAsStatus:(NSString *)arg1;
- (NSString *)statusAsString:(int)arg1;
@end
