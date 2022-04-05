/*
This file is part of Telegram Desktop,
the official desktop application for the Telegram messaging service.

For license and copyright information please follow this link:
https://github.com/telegramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

namespace Ui {
class GenericBox;
} // namespace Ui

class History;

class ChooseFilterValidator final {
public:
	ChooseFilterValidator(not_null<History*> history);

	[[nodiscard]] bool canAdd() const;
	[[nodiscard]] bool canRemove(FilterId filterId) const;

	void add(FilterId filterId) const;
	void remove(FilterId filterId) const;

private:
	const not_null<History*> _history;

};

void ChooseFilterBox(
	not_null<Ui::GenericBox*> box,
	not_null<History*> history);