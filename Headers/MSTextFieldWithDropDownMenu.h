//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

@class NSMenu;

@interface MSTextFieldWithDropDownMenu : NSTextField
{
    NSMenu *_popupMenu;
}

+ (id)dropDownArrowImage;
@property(retain, nonatomic) NSMenu *popupMenu; // @synthesize popupMenu=_popupMenu;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)resetCursorRects;
- (void)mouseDown:(id)arg1;
- (struct CGRect)dropDownArrowHitTestRect;

@end
