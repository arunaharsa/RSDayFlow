//
// RSDFDatePickerDayCell.h
//
// Copyright (c) 2013 Evadne Wu, http://radi.ws/
// Copyright (c) 2013-2014 Ruslan Skorb, http://lnkd.in/gsBbvb
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

#import <UIKit/UIKit.h>
#import "RSDayFlow.h"

/**
 The `RSDFDatePickerDayCell` is a cell which used to display a day in the date picker view.
 */
@interface RSDFDatePickerDayCell : UICollectionViewCell

///-------------------------
/// @name Accessing Subviews
///-------------------------

- (void)updateSubviews;

/**
 The label showing the cell's date.
 */
@property (nonatomic, readonly, strong) UILabel *dateLabel;
@property (nonatomic, strong) UILabel *monthLabel;

///--------------------------------------
/// @name Accessing Attributes of the Day
///--------------------------------------

/**
 A date which corresponds to the current cell.
 */
@property (nonatomic, readwrite, assign) RSDFDatePickerDate date;

/**
 A Boolean value that determines whether the cell's day that's not this month.
 
 @discussion Cells with these days do not display the today image, the overlay image, the marks and the divider image.
*/
@property (nonatomic, getter = isNotThisMonth) BOOL notThisMonth;

/**
 A Boolean value that determines whether it is the first cell in the month view, although the date is not necessarily belongs to that month
 
 */
@property (nonatomic, getter = isFirstDayOfMonthView) BOOL firstDayOfMonthView;

/**
 A Boolean value that determines whether the cell's day is day off.
 */
@property (nonatomic, getter = isDayOff) BOOL dayOff;

/**
 A Boolean value that determines whether the cell represents the current day.
 */
@property (nonatomic, getter = isToday) BOOL today;


/**
 A Boolean value that determines whether the cell represents the earlier than today.
 */
@property (nonatomic, getter = isEarlierThanToday) BOOL earlierThanToday;

/**
 A Boolean value that determines whether the cell have a mark.
 */
@property (nonatomic, getter = isMarked) BOOL marked;

/**
 A Boolean value that determines whether all tasks for the cell's day are completed.
 */
@property (nonatomic, getter = isCompleted) BOOL completed;

///---------------------------------------
/// @name Accessing Attributes of the View
///---------------------------------------

/**
 The view’s background color. Default value is `[UIColor clearColor]`.
 
 @discussion Can be overridden in subclasses for customization.
 */
- (UIColor *)selfBackgroundColor;

///---------------------------------------
/// @name Accessing Attributes of Subviews
///---------------------------------------

/**
 The font of the text which displayed by the label of the day. Default value is [UIFont fontWithName:@"HelveticaNeue" size:18.0f].
 
 @discussion Can be overridden in subclasses for customization.
 */
- (UIFont *)dayLabelFont;

/**
 The text color for the label of the day. Default value is [UIColor blackColor].
 
 @discussion Can be overridden in subclasses for customization.
 */
- (UIColor *)dayLabelTextColor;

/**
 The text color for the label of the day off. Default value is [UIColor colorWithRed:184/255.0f green:184/255.0f blue:184/255.0f alpha:1.0f].
 
 @discussion Can be overridden in subclasses for customization.
 */
- (UIColor *)dayOffLabelTextColor;

/**
 The text color for the label of the day that's not this month. Default value is [UIColor clearColor].
 
 @discussion Can be overridden in subclasses for customization.
 */
- (UIColor *)notThisMonthLabelTextColor;

/**
 The font for the label of the current day. Default value is [UIFont fontWithName:@"HelveticaNeue" size:18.0f].
 
 @discussion Can be overridden in subclasses for customization.
 */
- (UIFont *)todayLabelFont;

/**
 The text color for the label of the current day. Default value is [UIColor colorWithRed:0/255.0f green:121/255.0f blue:255/255.0f alpha:1.0f].
 
 @discussion Can be overridden in subclasses for customization.
 */
- (UIColor *)todayLabelTextColor;

/**
 The font for the label of the current day when it is selected. Default value is [UIFont fontWithName:@"HelveticaNeue-Bold" size:19.0f].
 
 @discussion Can be overridden in subclasses for customization.
 */
- (UIFont *)selectedTodayLabelFont;

/**
 The text color for the label of the current day when it is selected. Default value is [UIColor whiteColor].
 
 @discussion Can be overridden in subclasses for customization.
 */
- (UIColor *)selectedTodayLabelTextColor;

/**
 The color of the background image for the cell of the current day. Default value is [UIColor colorWithRed:0/255.0f green:121/255.0f blue:255/255.0f alpha:1.0f].
 
 @discussion Can be overridden in subclasses for customization. Ignored if `customSelectedTodayImage` is not equal to `nil`.
 */
- (UIColor *)selectedTodayImageColor;

/**
 The custom background image for the cell of the current day. Default value is `nil`.
 
 @discussion Can be overridden in subclasses for customization.
 */
- (UIImage *)customSelectedTodayImage;

/**
 The font for the label of the day when it is selected. Default value is [UIFont fontWithName:@"HelveticaNeue-Bold" size:19.0f].
 
 @discussion Can be overridden in subclasses for customization.
 */
- (UIFont *)selectedDayLabelFont;

/**
 The text color for the label of the day when it is selected. Default value is [UIColor whiteColor].
 
 @discussion Can be overridden in subclasses for customization.
 */
- (UIColor *)selectedDayLabelTextColor;

/**
 The color of the background image for the cell of the day when it is selected. Default value is [UIColor colorWithRed:255/255.0f green:59/255.0f blue:48/255.0f alpha:1.0f].
 
 @discussion Can be overridden in subclasses for customization. Ignored if `customSelectedDayImage` is not equal to `nil`.
 */
- (UIColor *)selectedDayImageColor;

/**
 The custom background image for the cell of the day when it is selected. Default value is `nil`.
 
 @discussion Can be overridden in subclasses for customization.
 */
- (UIImage *)customSelectedDayImage;

/**
 The color of the overlay image for the cell of the day. Default value is [UIColor colorWithRed:184/255.0f green:184/255.0f blue:184/255.0f alpha:1.0f].
 
 @discussion Can be overridden in subclasses for customization. Ignored if `customOverlayImage` is not equal to `nil`.
 */
- (UIColor *)overlayImageColor;

/**
 The custom overlay image for the cell of the current day. Default value is `nil`.
 
 @discussion Can be overridden in subclasses for customization.
 */
- (UIImage *)customOverlayImage;

/**
 The color of the incomplete mark image for the cell of the day. Default value is [UIColor colorWithRed:184/255.0f green:184/255.0f blue:184/255.0f alpha:1.0f].
 
 @discussion Can be overridden in subclasses for customization. Ignored if `customIncompleteMarkImage` is not equal to `nil`.
 */
- (UIColor *)incompleteMarkImageColor;

/**
 The custom incomplete mark image for the cell of the day. Default value is `nil`.
 
 @discussion Can be overridden in subclasses for customization.
 */
- (UIImage *)customIncompleteMarkImage;

/**
 The color of the complete mark image for the cell of the day. Default value is [UIColor colorWithRed:83/255.0f green:215/255.0f blue:105/255.0f alpha:1.0f].
 
 @discussion Can be overridden in subclasses for customization. Ignored if `customCompleteMarkImage` is not equal to `nil`.
 */
- (UIColor *)completeMarkImageColor;

/**
 The custom complete mark image for the cell of the day. Default value is `nil`.
 
 @discussion Can be overridden in subclasses for customization.
 */
- (UIImage *)customCompleteMarkImage;

/**
 The color of the divider image for the cell of the day. Default value is [UIColor colorWithRed:200/255.0f green:200/255.0f blue:200/255.0f alpha:1.0f].
 
 @discussion Can be overridden in subclasses for customization. Ignored if `customDividerImage` is not equal to `nil`.
 */
- (UIColor *)dividerImageColor;

/**
 The custom divider image for the cell of the day. Default value is `nil`.
 
 @discussion Can be overridden in subclasses for customization.
 */
- (UIImage *)customDividerImage;

// additional modifiers
- (UIFont *)monthLabelFont;
- (UIColor *)monthLabelTextColor;

@end
