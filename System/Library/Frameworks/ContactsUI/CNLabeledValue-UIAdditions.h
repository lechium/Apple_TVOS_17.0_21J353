//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNLabeledValue.h>

@class NSString;

@interface CNLabeledValue (UIAdditions)
+ (id)builtinLabelsForProperty:(id)arg1;	// IMP=0x002000000004aa4d
+ (void)deleteCustomLabel:(id)arg1;	// IMP=0x002000000004a9ff
+ (id)allCustomLabels;	// IMP=0x002000000004a919
+ (id)allLabels;	// IMP=0x002000000004a8f0
+ (id)defaultLabels;	// IMP=0x002000000004a6f7
+ (void *)addressBook;	// IMP=0x002000000004a655
@property(readonly, nonatomic) NSString *localizedLabel;
- (Class)contactViewControllerCellClassForPropertyType:(id)arg1;	// IMP=0x0010000000085f59
@end

